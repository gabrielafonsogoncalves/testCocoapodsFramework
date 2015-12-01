//
//  JumioCore.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 06/03/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for JumioCore.

FOUNDATION_EXPORT double JumioCoreVersionNumber;

//! Project version string for JumioCore.
FOUNDATION_EXPORT const unsigned char JumioCoreVersionString[];

#import <JumioCore/JMConstants.h>
#import <JumioCore/JMAutolayoutUtilities.h>
#import <JumioCore/JMAlertView.h>
#import <JumioCore/JMAlertViewController.h>
#import <JumioCore/JMAppearance.h>
#import <JumioCore/JMBaseCollapsableView.h>
#import <JumioCore/JMBaseServerTask+Utilities.h>
#import <JumioCore/JMBaseServerTask.h>
#import <JumioCore/JMNetworkStateConstants.h>
#import <JumioCore/JMNetworkStateMachine.h>
#import <JumioCore/JMRoi.h>
#import <JumioCore/JMBaseInfoView.h>
#import <JumioCore/JMBaseTableViewCell.h>
#import <JumioCore/JMBrandingLogo.h>
#import <JumioCore/JMCameraFocusIndicatorView.h>
#import <JumioCore/JMCaptureSessionManager.h>
#import <JumioCore/JMCertificateBundle.h>
#import <JumioCore/JMExtendedScanDebugging.h>
#import <JumioCore/JMImageBundle.h>
#import <JumioCore/JMLogging.h>
#import <JumioCore/JMManualEntryButton.h>
#import <JumioCore/JMResourceLoader.h>
#import <JumioCore/JMRoiOverlay.h>
#import <JumioCore/JMRoiSettings.h>
#import <JumioCore/JMSDKStyle.h>
#import <JumioCore/JMSeparatorView.h>
#import <JumioCore/JMRoiUtils.h>
#import <JumioCore/JMString.h>
#import <JumioCore/JMTableView.h>
#import <JumioCore/JMThemeableButton.h>
#import <JumioCore/JMToggleCameraButton.h>
#import <JumioCore/JMToggleFlashButton.h>
#import <JumioCore/NSData+Base64.h>
#import <JumioCore/NSString+JMHashing.h>
#import <JumioCore/NSString+JMLevenshtein.h>
#import <JumioCore/NSString+JMUtilities.h>
#import <JumioCore/UIDevice+JMHardware.h>
#import <JumioCore/UIImage+JMImage.h>
#import <JumioCore/UIScreen+Utilities.h>
#import <JumioCore/UIImage+JMUtilities.h>
#import <JumioCore/UIView+JMFrameManipulations.h>
#import <JumioCore/JMUtilityMacros.h>
#import <JumioCore/JMSDK.h>
#import <JumioCore/JMStringUtilities.h>
#import <JumioCore/JMLoadingTableViewCell.h>

//State Machine Framework
#import <JumioCore/JMBaseState.h>
#import <JumioCore/JMState.h>
#import <JumioCore/JMFinalState.h>
#import <JumioCore/JMStateMachine.h>
#import <JumioCore/JMStateTransition.h>
#import <JumioCore/JMStateTransitionEvent.h>
#import <JumioCore/JMNetworkState.h>
//UIController
#import <JumioCore/JMUIController.h>

#import <JumioCore/JMServerTaskLogInfo.h>