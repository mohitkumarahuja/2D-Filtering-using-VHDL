--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:33:22 12/01/2017
-- Design Name:   
-- Module Name:   C:/Users/Anand/Desktop/Mohit_VHDL_Project - Mohit_VHDL_Project/Mohit_TB.vhd
-- Project Name:  Mohit_VHDL_Project
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use std.textio.all;
use ieee.std_logic_textio.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Code of MOHIT AHUJA and MENG DI 

ENTITY Mohit_TB IS
END Mohit_TB;
 
ARCHITECTURE behavior OF Mohit_TB IS 


-----------------------------------------------------
--------------- Component Declaration ---------------
-----------------------------------------------------
 
    COMPONENT Cache_Menory		-- Cache_Menory.vhd is now linked with test Bench
    PORT(
         CLK : IN  std_logic;
         DATA : IN  std_logic_vector(7 downto 0);
         START_MEM : IN  std_logic;
         PIXEL_READY : OUT  std_logic;
         PIXEL_8 : OUT  std_logic_vector(7 downto 0);
         PIXEL_7 : OUT  std_logic_vector(7 downto 0);
         PIXEL_6 : OUT  std_logic_vector(7 downto 0);
         PIXEL_5 : OUT  std_logic_vector(7 downto 0);
         PIXEL_4 : OUT  std_logic_vector(7 downto 0);
         PIXEL_3 : OUT  std_logic_vector(7 downto 0);
         PIXEL_2 : OUT  std_logic_vector(7 downto 0);
         PIXEL_1 : OUT  std_logic_vector(7 downto 0);
         PIXEL_0 : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
	 
	     COMPONENT FILTER_PROCESS		-- FILTER_PROCESS.vhd is now linked with test Bench
    Port ( PIXEL_0 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_1 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_2 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_3 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_4 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_5 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_6 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_7 : in  STD_LOGIC_VECTOR (7 downto 0);
           PIXEL_8 : in  STD_LOGIC_VECTOR (7 downto 0);
--           OUTPUT_FILTER : out  STD_LOGIC_VECTOR (7 downto 0);
           OUTPUT_FILTER : out  STD_LOGIC_VECTOR (15 downto 0);
           Enable : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           Result_Available : out  STD_LOGIC);
    END COMPONENT;
    

-----------------------------------------------------
---------------- Signals Declaration ----------------
-----------------------------------------------------
   signal CLK : std_logic := '0';
   signal DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal START_MEM : std_logic := '0';
	signal count_clk: integer range 0 to 255 := 0;	
	signal count_pixels: integer range 0 to 16384 := 0;	

	signal pixel: std_logic_vector (7 downto 0);	
--	signal pixel_filt: std_logic_vector (7 downto 0);
	signal pixel_filt: std_logic_vector (15 downto 0);
	signal pixel_zeros: std_logic_vector (15 downto 0) := "0000000000000000";
	signal endoffile: std_logic := '0';
	signal fileready: std_logic := '0';
	signal PIXEL_READY : std_logic:= '0';
	signal Result_Available: std_logic := '0';
	signal enable_filter: std_logic := '0';

 	-- Outputs
   signal PIXEL_8 : std_logic_vector(7 downto 0);
   signal PIXEL_7 : std_logic_vector(7 downto 0);
   signal PIXEL_6 : std_logic_vector(7 downto 0);
   signal PIXEL_5 : std_logic_vector(7 downto 0);
   signal PIXEL_4 : std_logic_vector(7 downto 0);
   signal PIXEL_3 : std_logic_vector(7 downto 0);
   signal PIXEL_2 : std_logic_vector(7 downto 0);
   signal PIXEL_1 : std_logic_vector(7 downto 0);
   signal PIXEL_0 : std_logic_vector(7 downto 0);

	signal RESET_counter: std_logic;
   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
CACHE_MEM : Cache_Menory PORT MAP (
          CLK => CLK,
          DATA => pixel,
          START_MEM => START_MEM,
          PIXEL_READY => PIXEL_READY,
          PIXEL_8 => PIXEL_8,
          PIXEL_7 => PIXEL_7,
          PIXEL_6 => PIXEL_6,
          PIXEL_5 => PIXEL_5,
          PIXEL_4 => PIXEL_4,
          PIXEL_3 => PIXEL_3,
          PIXEL_2 => PIXEL_2,
          PIXEL_1 => PIXEL_1,
          PIXEL_0 => PIXEL_0 );	
			 
FILTER : FILTER_PROCESS Port map ( 
	  PIXEL_0 => PIXEL_0,
	  PIXEL_1 => PIXEL_1,
	  PIXEL_2 => PIXEL_2,
	  PIXEL_3 => PIXEL_3,
	  PIXEL_4 => PIXEL_4,
	  PIXEL_5 => PIXEL_5,
	  PIXEL_6 => PIXEL_6,
	  PIXEL_7 => PIXEL_7,
	  PIXEL_8 => PIXEL_8,
	  OUTPUT_FILTER => pixel_filt,
	  Enable => enable_filter,
	  CLK => CLK,
	  Result_Available => Result_Available );


---------------- Clock Declaration ----------------
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 
 
 ----------------- Clock Process -----------------
clk_counter_process :process(CLK, RESET_counter)
begin
	
	if (RESET_counter = '1') then
		count_clk <= 0;
	else
		if (CLK'event and CLK = '1') then
			if count_clk = 255 then
				count_clk <= 0;
			else
				count_clk <= count_clk + 1;
			end if;
			count_pixels <= count_pixels + 1;	
		end if;
	end if;
end process;


-----------------------------------------------------
--------------- Reading Image Process ---------------
-----------------------------------------------------

READFILE:process(CLK)
  FILE infile : text is in "Lena128x128g_8bits.dat";
  variable line_var: line;
  variable value :std_logic_vector (7 downto 0);    
  begin
	 if (CLK'event and CLK = '1') then
			if (not endfile(infile)) then
					readline (infile,line_var);
					read (line_var,value);
					pixel <= value;					
				   fileready <= '1';
					endoffile <= '0';
			else
				fileready <= '0';
				endoffile <= '1';
				file_close (infile);
			end if;
	else null;
	end if;
 end process;
 
 
-----------------------------------------------------
--------------- Writing Image Process ---------------
-----------------------------------------------------

WRITEFILE:process(CLK, pixel_filt, fileready)
FILE outfile : text is out "output.dat";
variable line_var, line_out : line;
begin
	 if (CLK'event and CLK = '1') then 
		 if fileready = '1' then
			if count_pixels <= 269 or (count_pixels >= 284 and count_pixels <= 290) then
				write(line_out, pixel_zeros, right);
			else
				write(line_out, pixel_filt, right);
			end if;
			writeline(outfile, line_out);
		 else
			if endoffile = '1' then
				file_close (outfile);
			end if;
		 end if;
	end if;
 end process;
 
 
-----------------------------------------------------
----------------- Filtering Process -----------------
-----------------------------------------------------

filtering: process(CLK, fileready)

begin
	 if (CLK'event and CLK = '1') then 
		if (fileready = '1' and endoffile = '0') then
			start_mem <= '1';
			RESET_counter  <= '0';
			enable_filter <= PIXEL_READY;
		end if;
	 end if;
end process;
end behavior;
