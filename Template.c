/**@file


**/
#include <Uefi.h>
#include <Protocol/ComponentName.h>
#include <Protocol/DriverBinding.h>
//
// The Library classes this module consumes
//
#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>

#include "Template.h"


EFI_DRIVER_BINDING_PROTOCOL gTemplateDriverBinding = {
  TemplateDriverBindingSupported,
  TemplateDriverBindingStart,
  TemplateDriverBindingStop,
  0xa,
  NULL,
  NULL
};

EFI_STATUS
EFIAPI
InitializeTemplate(
  IN EFI_HANDLE           ImageHandle,
  IN EFI_SYSTEM_TABLE     *SystemTable
  )
{
  EFI_STATUS              Status;
  //
  // Install driver model protocol(s).
  //
  Status = EfiLibInstallAllDriverProtocols2 (
             ImageHandle,
             SystemTable,
             &gTemplateDriverBinding,
             ImageHandle,
             &gTemplateComponentName,
             &gTemplateComponentName2,
             NULL,
             NULL,
             &gTemplateDriverDiagnostics,
             &gTemplateDriverDiagnostics2
             );
  
  ASSERT_EFI_ERROR (Status);

  DEBUG ((EFI_D_ERROR, "%a(%d)\n", __FUNCTION__, __LINE__));
   
  //Install driver's published protocols
  
  // Connect controller if required
  return Status;
}

EFI_STATUS
EFIAPI
TemplateDriverBindingSupported (
  IN  EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN  EFI_HANDLE                   Handle,
  IN  EFI_DEVICE_PATH_PROTOCOL     *RemainingDevicePath
  )
{
  DEBUG ((EFI_D_ERROR, "%a(%d)\n", __FUNCTION__, __LINE__));
  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
TemplateDriverBindingStart (
  IN  EFI_DRIVER_BINDING_PROTOCOL   *This,
  IN  EFI_HANDLE                    Handle,
  IN  EFI_DEVICE_PATH_PROTOCOL      *RemainingDevicePath
  )
{
  DEBUG ((EFI_D_ERROR, "%a(%d)\n", __FUNCTION__, __LINE__));
  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
TemplateDriverBindingStop (
  IN  EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN  EFI_HANDLE                   Handle,
  IN  UINTN                        NumberOfChildren,
  IN  EFI_HANDLE                   *ChildHandleBuffer
  )
{
  return EFI_SUCCESS;
}

