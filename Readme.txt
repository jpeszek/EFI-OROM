1. Purpose
==========
Template to build UEFI driver

2. Build instructions
======================
1. Add the following line: 
 
	AppPkg/Applications/Template/Template.inf        

	to:
	
	c:\Projects\UDK2014\MyWorksapce\AppPkg.dsc

2. Preapre build:
	cd c:\Projects\UDK2014\MyWorksapce\
	edksetup.bat reconfig
	
3. Build driver:
	build -a X64-t VS2012x86 -p AppPkg\AppPkg.dsc

4. Generate OROM:
    BaseTools\Bin\Win32\EfiRom.exe -e Build\AppPkg\DEBUG_VS2012x86\X64\Template.efi -f 8086 -i 2334
	
	Template.rom will be placed in Build\AppPkg\DEBUG_VS2012x86\X64\ directory