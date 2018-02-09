----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:34:06 12/01/2017 
-- Design Name: 
-- Module Name:    Cache_Menory - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

-- Code of MOHIT AHUJA and MENG DI

entity Cache_Menory is
    Port ( CLK : in  STD_LOGIC;
           DATA : in  STD_LOGIC_VECTOR (7 downto 0);
           START_MEM : in  STD_LOGIC;
           PIXEL_READY : out  STD_LOGIC;
           PIXEL_8 : out  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_7 : out  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_6 : out  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_5 : out  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_4 : out  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_3 : out  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_2 : out  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_1 : out  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_0 : out  STD_LOGIC_VECTOR (7 downto 0));
end Cache_Menory;

architecture Behavioral of Cache_Menory is

-----------------------------------------------------
--------------- Component Declaration ---------------
-----------------------------------------------------

------------------- FIFO Declaration ----------------
COMPONENT FIFO_MOHIT_project
  PORT (
    clk : IN STD_LOGIC;
    rst : IN STD_LOGIC;
    din : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    wr_en : IN STD_LOGIC;
    rd_en : IN STD_LOGIC;
    prog_full_thresh : IN STD_LOGIC_VECTOR(9 DOWNTO 0);
    dout : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    full : OUT STD_LOGIC;
    empty : OUT STD_LOGIC;
    data_count : OUT STD_LOGIC_VECTOR(9 DOWNTO 0);
    prog_full : OUT STD_LOGIC
  );
END COMPONENT;


---------------------------
--------- 1st FIFO --------
---------------------------
-- Inputs
signal din1 : std_logic_vector(7 downto 0) := (others => '0');
signal wr_en1 : std_logic := '1';
-- Value of Program_Full threshold set to 123
signal prog_full_thresh: STD_LOGIC_VECTOR(9 DOWNTO 0) := "0001111011";
-- Outputs
signal dout1 : std_logic_vector(7 downto 0);
signal full1 : std_logic;
signal data_count1 : STD_LOGIC_VECTOR(9 DOWNTO 0);
signal prog_full1 : STD_LOGIC;

---------------------------
--------- 2st FIFO --------
---------------------------
-- Inputs
signal din2 : std_logic_vector(7 downto 0) := (others => '0');
signal wr_en2 : std_logic := '1';
--Outputs
signal dout2 : std_logic_vector(7 downto 0);
signal full2 : std_logic;
signal data_count2 : STD_LOGIC_VECTOR(9 DOWNTO 0);
signal prog_full2 : STD_LOGIC;
signal rst: std_logic;

---------------------------
---- Temporary Signals ----
---------------------------
signal PIXEL_0_TEMP: std_logic_vector (7 downto 0);
signal PIXEL_1_TEMP: std_logic_vector (7 downto 0);
signal PIXEL_2_TEMP: std_logic_vector (7 downto 0);
signal PIXEL_3_TEMP: std_logic_vector (7 downto 0);
signal PIXEL_4_TEMP: std_logic_vector (7 downto 0);
signal PIXEL_5_TEMP: std_logic_vector (7 downto 0);
signal PIXEL_6_TEMP: std_logic_vector (7 downto 0);
signal PIXEL_7_TEMP: std_logic_vector (7 downto 0);
signal PIXEL_8_TEMP: std_logic_vector (7 downto 0);

signal counter: integer := 0;

begin

-- Instantiate FIFO-1
FIFO1 : FIFO_MOHIT_project  PORT MAP (
    clk => clk,
    rst => rst,
    din => din1,
    wr_en => wr_en1,
    rd_en => prog_full1,
    prog_full_thresh => prog_full_thresh,
    dout => dout1,
    full => full1,
    data_count => data_count1,
    prog_full => prog_full1
  );
 
 -- Instantiate FIFO-2
FIFO2 : FIFO_MOHIT_project  PORT MAP (
    clk => clk,
    rst => rst,
    din => din2,
    wr_en => wr_en2,
    rd_en => prog_full2,
    prog_full_thresh => prog_full_thresh,
    dout => dout2,
    full => full2,
    data_count => data_count2,
    prog_full => prog_full2
  );
  
  
-----------------------------------------------------
----------------- Process Starts --------------------
-----------------------------------------------------

main: process(CLK, START_MEM)
begin
	if (CLK'event and CLK = '1') then
		if (START_MEM = '1') then
			if (full1 = '0' and full2 = '0') then
				if (counter > 257) then
					PIXEL_READY <= '1';
				else
					counter <= counter + 1;
					PIXEL_READY <= '0';
				end if;
				
				-- Serial Transfering
				PIXEL_0_TEMP <= PIXEL_1_TEMP;
				PIXEL_1_TEMP <= PIXEL_2_TEMP;
				PIXEL_2_TEMP <= dout2;
				
				-- Serial Transfering
				din2 <= PIXEL_3_TEMP;
				PIXEL_3_TEMP <= PIXEL_4_TEMP;
				PIXEL_4_TEMP <= PIXEL_5_TEMP;
				PIXEL_5_TEMP <= dout1;
				
				-- Serial Transfering
				din1 <= PIXEL_6_TEMP;
				PIXEL_6_TEMP <= PIXEL_7_TEMP;
				PIXEL_7_TEMP <= PIXEL_8_TEMP;
				PIXEL_8_TEMP <= DATA;
			end if;
		end if;
	end if;
end process;


-- We didn't used D-Flip Flops for temporary storage of 
-- Pixels. Rather than D- Flip Flops, We used Signals. 
-- The signals holded the value of pixels temporarily.

-- Assigning the value from temporary storage to Pixel signal.
PIXEL_0 <= PIXEL_0_temp;
PIXEL_1 <= PIXEL_1_temp;
PIXEL_2 <= PIXEL_2_temp;
PIXEL_3 <= PIXEL_3_temp;
PIXEL_4 <= PIXEL_4_temp;
PIXEL_5 <= PIXEL_5_temp;
PIXEL_6 <= PIXEL_6_temp;
PIXEL_7 <= PIXEL_7_temp;
PIXEL_8 <= PIXEL_8_temp;

end Behavioral;
