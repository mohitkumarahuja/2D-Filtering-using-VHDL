-- VHDL code for D Flip FLop
-- VHDL code for rising edge D flip flop
 
Library IEEE;
USE IEEE.Std_logic_1164.all;

entity RisingEdge_DFlipFlop is 
   port(
      Q : in STD_LOGIC_VECTOR(15 DOWNTO 0);    
      Clk :in std_logic;   
      D :out  STD_LOGIC_VECTOR(15 DOWNTO 0)    
   );
end RisingEdge_DFlipFlop;
architecture Behavioral of RisingEdge_DFlipFlop is  
begin  
 process(Clk)
 begin 
    if(rising_edge(Clk)) then
   D <= Q; 
    end if;       
 end process;  
end Behavioral; 