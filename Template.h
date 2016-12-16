/**@file
**/
#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_

#include <Uefi.h>
#include <Protocol/ComponentName.h>
#include <Protocol/ComponentName2.h>
#include <Protocol/DriverConfiguration.h>
#include <Protocol/DriverDiagnostics.h>
#include <Protocol/DriverDiagnostics2.h>
#include <Protocol/DriverBinding.h>


//
// Template Driver Global Variables
//
extern EFI_DRIVER_BINDING_PROTOCOL         gTemplateDriverBinding;
extern EFI_COMPONENT_NAME_PROTOCOL         gTemplateComponentName;
extern EFI_COMPONENT_NAME2_PROTOCOL        gTemplateComponentName2;
extern EFI_DRIVER_CONFIGURATION_PROTOCOL   gTemplateDriverConfiguration;
extern EFI_DRIVER_DIAGNOSTICS_PROTOCOL     gTemplateDriverDiagnostics;
extern EFI_DRIVER_DIAGNOSTICS2_PROTOCOL    gTemplateDriverDiagnostics2;

//
// EFI Driver Binding Functions
//
EFI_STATUS
EFIAPI
TemplateDriverBindingSupported (
  IN EFI_DRIVER_BINDING_PROTOCOL    *This,
  IN  EFI_HANDLE                    Handle,
  IN  EFI_DEVICE_PATH_PROTOCOL      *RemainingDevicePath
  );

EFI_STATUS
EFIAPI
TemplateDriverBindingStart (
  IN EFI_DRIVER_BINDING_PROTOCOL    *This,
  IN  EFI_HANDLE                    Handle,
  IN  EFI_DEVICE_PATH_PROTOCOL      *RemainingDevicePath
  );

EFI_STATUS
EFIAPI
TemplateDriverBindingStop (
  IN  EFI_DRIVER_BINDING_PROTOCOL   *This,
  IN  EFI_HANDLE                    Handle,
  IN  UINTN                         NumberOfChildren,
  IN  EFI_HANDLE                    *ChildHandleBuffer
  );
#endif
