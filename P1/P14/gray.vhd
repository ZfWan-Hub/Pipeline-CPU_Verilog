----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:11:30 10/26/2018 
-- Design Name: 
-- Module Name:    gray - Behavioral 
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

entity gray is
    Port ( Clk : in  STD_LOGIC;
           Reset : in  STD_LOGIC;
           En : in  STD_LOGIC;
           Output : out  STD_LOGIC_VECTOR (2 downto 0);
           Overflow : out  STD_LOGIC);
end gray;

architecture Behavioral of gray is

begin


end Behavioral;

