----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:03:56 12/01/2017
-- Design Name: 
-- Module Name:    FILTER_PROCESS - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_textio.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
-- library UNISIM;
-- use UNISIM.VComponents.all;

entity FILTER_PROCESS is
    Port ( PIXEL_0 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_1 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_2 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_3 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_4 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_5 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_6 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_7 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_8 : in  STD_LOGIC_VECTOR (7 downto 0);
--			  OUTPUT_FILTER : out  STD_LOGIC_VECTOR (7 downto 0);
           OUTPUT_FILTER : out  STD_LOGIC_VECTOR (15 downto 0);
           Enable : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           Result_Available : out  STD_LOGIC);
end FILTER_PROCESS;

architecture Behavioral of FILTER_PROCESS is

-----------------------------------------------------
--------------- Component Declaration ---------------
-----------------------------------------------------
COMPONENT ADDER		-- Adder Defined
    PORT(
         a : IN  std_logic_vector(15 downto 0);
         b : IN  std_logic_vector(15 downto 0);
         clk : IN  std_logic;
         ce : IN  std_logic;
         s : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
	 
COMPONENT MULTIPLEXER		-- Multiplexer Defined
  PORT (
    clk : IN STD_LOGIC;
    a : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    p : OUT STD_LOGIC_VECTOR(15 DOWNTO 0)
  );
END COMPONENT;

COMPONENT RisingEdge_DFlipFlop	-- D Flip-Flop defined
	PORT(
		Clk : IN STD_LOGIC;
		D : OUT STD_LOGIC_VECTOR(15 DOWNTO 0);          
		Q : IN STD_LOGIC_VECTOR(15 DOWNTO 0)
		);
	END COMPONENT;

COMPONENT DIVIDER		-- Divider Defined
  PORT (
    aclk : IN STD_LOGIC;
    s_axis_divisor_tvalid : IN STD_LOGIC;
    s_axis_divisor_tdata : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    s_axis_dividend_tvalid : IN STD_LOGIC;
    s_axis_dividend_tdata : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    m_axis_dout_tvalid : OUT STD_LOGIC;
    m_axis_dout_tdata : OUT STD_LOGIC_VECTOR(31 DOWNTO 0)
	   );
END COMPONENT;


-----------------------------------------------------
---------------- Signal Declaration -----------------
-----------------------------------------------------
 signal temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12: STD_LOGIC_VECTOR(15 DOWNTO 0);
 signal Sum0, Sum1, Sum2, Sum3 :std_logic_vector (15 downto 0);
 signal Sum4,Sum5 :std_logic_vector (15 downto 0);
 signal Sum6 :std_logic_vector (15 downto 0);
 signal Sum7 :std_logic_vector (15 downto 0);
 signal Output_Divider :std_logic_vector (31 downto 0);
 signal Output_Valid : STD_LOGIC;
 signal en : std_logic := '1';
 
 
-----------------------------------------------------
---------------- Kernal Declaration -----------------
-----------------------------------------------------

-- Defined are the different Kernels for different filters
-- uncomment the filter you want to apply and comment the 
-- uncommented one.


-- Kernal For Averaging Filter - [111; 111; 111]

--constant Kernal_1st_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_2nd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_3rd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_4th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_5th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_6th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_7th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_8th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_9th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";


-- Kernal For Averaging Filter - [111; 101; 111]

--constant Kernal_1st_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_2nd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_3rd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_4th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_5th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
--constant Kernal_6th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_7th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_8th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_9th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
 
 
-- Kernal For Sobel Filter - [121; 000; -1 -2 -1]

--constant Kernal_1st_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_2nd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000010";
--constant Kernal_3rd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_4th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
--constant Kernal_5th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
--constant Kernal_6th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
--constant Kernal_7th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "11111111";
--constant Kernal_8th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "11111110";
--constant Kernal_9th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "11111111";


-- Kernal For Sobel Filter - [1 0 -1; 2 0 -2; 1 0 -1]

--constant Kernal_1st_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_2nd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
--constant Kernal_3rd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "11111111";
--constant Kernal_4th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000010";
--constant Kernal_5th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
--constant Kernal_6th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "11111110";
--constant Kernal_7th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
--constant Kernal_8th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
--constant Kernal_9th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "11111111";


-- Kernal For Gaussian Filter - [1 2 1; 2 4 2; 1 2 1]

constant Kernal_1st_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
constant Kernal_2nd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000010";
constant Kernal_3rd_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
constant Kernal_4th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000010";
constant Kernal_5th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000100";
constant Kernal_6th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000010";
constant Kernal_7th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";
constant Kernal_8th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000010";
constant Kernal_9th_Bit : STD_LOGIC_VECTOR(7 downto 0) := "00000001";


begin	-- Process Begins


-----------------------------------------------------
-------------------- Multiplexer  -------------------
-----------------------------------------------------

-- Multiplexers are used to multiply the pixel values to  
-- the kernal of the filter.

MUX_1: MULTIPLEXER	-- 1st Multiplexer
       Port map(CLK		=> CLK,
                a => PIXEL_0,
                b => Kernal_1st_Bit,
					 p => temp1);						  
MUX_2: MULTIPLEXER	-- 2nd Multiplexer
       Port map(CLK		=> CLK,
                a => PIXEL_1,
                b => Kernal_2nd_Bit,
					 p => temp2);						  
MUX_3: MULTIPLEXER	-- 3rd Multiplexer
       Port map(CLK		=> CLK,
                a => PIXEL_2,
                b => Kernal_3rd_Bit,
					 p => temp3);						  
MUX_4: MULTIPLEXER	-- 4th Multiplexer
       Port map(CLK		=> CLK,
                a => PIXEL_3,
                b => Kernal_4th_Bit,
					 p => temp4);						  
MUX_5: MULTIPLEXER	-- 5th Multiplexer
       Port map(CLK		=> CLK,
                a => PIXEL_4,
                b => Kernal_5th_Bit,
					 p => temp5);						  
MUX_6: MULTIPLEXER	-- 6th Multiplexer
       Port map(CLK		=> CLK,
                a => PIXEL_5,
                b => Kernal_6th_Bit,
					 p => temp6);						  
MUX_7: MULTIPLEXER	-- 7th Multiplexer
       Port map(CLK		=> CLK,
                a => PIXEL_6,
                b => Kernal_7th_Bit,
					 p => temp7);						  
MUX_8: MULTIPLEXER	-- 8th Multiplexer
       Port map(CLK		=> CLK,
                a => PIXEL_7,
                b => Kernal_8th_Bit,
					 p => temp8);						  
MUX_9: MULTIPLEXER	-- 9th Multiplexer
       Port map(CLK		=> CLK,
                a => PIXEL_8,
                b => Kernal_9th_Bit,
					 p => temp9);
					 
-- 9 Multiplexers for 9 Pixels					 



-----------------------------------------------------
--------------------- Adder -------------------------
-----------------------------------------------------

-- Adders are used to add the output of multiplexers to  
-- there next neighbour. We can only use 2 signals in 
-- 1 adder.
						  
ADDER_1 : ADDER	-- 1st Adder
  PORT MAP (
    a => temp1,
    b => temp2,
    clk => clk,
    ce => en,
    s => Sum0  ); 
ADDER_2 : ADDER	-- 2nd Adder
  PORT MAP (
    a => temp3,
    b => temp4,
    clk => clk,
    ce => en,
    s => Sum1  );
ADDER_3 : ADDER	-- 3rd Adder
  PORT MAP (
    a => temp5,
    b => temp6,
    clk => clk,
    ce => en,
    s => Sum2  );
ADDER_4 : ADDER	-- 4th Adder
  PORT MAP (
    a => temp7,
    b => temp8,
    clk => clk,
    ce => en,
    s => Sum3  );
FLIP_FLOP_1: RisingEdge_DFlipFlop PORT MAP(	-- Flip-Flop to hold the value of 9th Pixel
		Q => temp9,
		Clk => clk,
		D => temp10 );
ADDER_5 : ADDER	-- 5th Adder
  PORT MAP (
    a => Sum0,
    b => Sum1,
    clk => clk,
    ce => en,
    s => Sum4  );
ADDER_6 : ADDER	-- 6th Adder
  PORT MAP (
    a => Sum2,
    b => Sum3,
    clk => clk,
    ce => en,
    s => Sum5  );
FLIP_FLOP_2: RisingEdge_DFlipFlop PORT MAP(	-- Flip-Flop to hold the value of 9th Pixel
		Q => temp10,
		Clk => clk,
		D => temp11 );
ADDER_7 : ADDER	-- 7th Adder
  PORT MAP (
    a => Sum4,
    b => Sum5,
    clk => clk,
    ce => en,
    s => Sum6  );
FLIP_FLOP_3: RisingEdge_DFlipFlop PORT MAP(	-- Flip-Flop to hold the value of 9th Pixel
		Q => temp11,
		Clk => clk,
		D => temp12 );
ADDER_8 : ADDER	-- 8th Adder
  PORT MAP (
    a => Sum6,
    b => temp12,
    clk => clk,
    ce => en,
    s => Sum7  );
DIVIDE_1 : DIVIDER	-- Divider
  PORT MAP (
    aclk => clk,
    s_axis_divisor_tvalid => '1',
--    s_axis_divisor_tdata => "0000000000000001",	-- Sobel
--    s_axis_divisor_tdata => "0000000000001001",	-- Average 
    s_axis_divisor_tdata => "0000000000010000",	-- Gaussian
    s_axis_dividend_tvalid => '1',
    s_axis_dividend_tdata => Sum7,
    m_axis_dout_tvalid => Output_Valid,
    m_axis_dout_tdata => Output_Divider
  );

-- The quotient of the divider is 16 bit i.e (31 downto 16)
OUTPUT_FILTER <= Output_Divider(31 downto 16);







-----------------------------------------------------
----------------- Second Process --------------------
-----------------------------------------------------

-- In this process we didn't used any multiplexer or 
-- any divider or any adder. We just used the library
-- Numeric_std and summed the pixel and we got very 
-- good output. It worked as the average filter.


-- Uncomment this process and comment the first one to see the results of this process

-- signal temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9: STD_LOGIC_VECTOR(7 DOWNTO 0);
-- signal Sum0, Sum1, Sum2, Sum3 :std_logic_vector (8 downto 0);
-- signal Sum4,Sum5 :std_logic_vector (9 downto 0);
-- signal Sum6 :std_logic_vector (10 downto 0);
-- signal Sum7 :std_logic_vector (10 downto 0);
--
--begin
--pn :process(CLK)
--
--variable compt : integer := 0 ;
--begin
--
--	if (Enable = '1') then   -- If Cache memory not ready
--		
--		if (CLK'event and CLK = '1') then    -- Cache memory ready to send 
--		
--		   -------------------------------------------
--			------------  FIRST STAGE ADDER  ----------
--			-------------------------------------------
--			Sum0 <= ('0' & temp1) + ('0' & temp2) ;	
--			Sum1 <= ('0' & temp3) + ('0' & temp4) ;
--			Sum2 <= ('0' & temp5) + ('0' & temp6) ;
--			Sum3 <= ('0' & temp7) + ('0' & temp8) ;
--			
--			-------------------------------------------
--			-----------  SECOND STAGE ADDER  ----------
--			-------------------------------------------
--			Sum4 <= ('0' & Sum0) + ('0' & Sum1) ;
--			Sum5 <= ('0' & Sum2) + ('0' & Sum3) ;
--			
--			-------------------------------------------
--			------------  THIRD STAGE ADDER  ----------
--			-------------------------------------------
--			Sum6 <= ('0' & Sum4)  + ('0' & Sum5) ;
--		  
--			-------------------------------------------
--			------------  Forth STAGE ADDER  ----------
--			-------------------------------------------
--			Sum7 <= ('0' & '0' & '0' & temp9)  + ('0' & Sum6) ;
--
--			
--			-- OUTPUT_FILTER  --  division by 8 Right shift 3 digits
--			OUTPUT_FILTER <= Sum6(10 downto 3) ;
--			Compt := Compt +1 ;
--
--			if (Compt = 3) then 
--
--				Result_Available <= '1';
--				
--			end if ;
--			
--		end if;
--	end if;
--end process;

end Behavioral;

