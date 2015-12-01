
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//Localization helper which uses the Localizable-Netswipe.strings file
#define NSWLocalizedString(key) (NSLocalizedStringFromTable(key, @"Localizable-Netswipe", nil))
#define NSWLocalizedStringDefaultValue(key, defaultValueIfNotDefined) (NSLocalizedStringWithDefaultValue(key, @"Localizable-Netswipe", [SharedResourceLoader netswipeBundle], defaultValueIfNotDefined,nil))
#define NVLocalizedString(key) (NSLocalizedStringFromTable(key, @"Localizable-Netverify", nil))
#define NVLocalizedStringDefaultValue(key, defaultValueIfNotDefined) (NSLocalizedStringWithDefaultValue(key, @"Localizable-Netverify", [SharedResourceLoader netverifyBundle], defaultValueIfNotDefined,nil))


#define Degrees_To_Radians(angle) ((angle) / 180.0 * M_PI)
#define Radians_To_Degrees(radian) ((radian) * 180.0 / M_PI)

#define INTERFACE_IDIOM_IS_PAD UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad
#define INTERFACE_IDIOM_IS_PHONE UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone
#define IS_IPHONE_WITH_FOUR_INCH_SCREEN  (INTERFACE_IDIOM_IS_PHONE && [[UIScreen mainScreen] bounds].size.height == 568)? YES : NO
#define IS_IPHONE_WITH_THREE_INCH_SCREEN  (INTERFACE_IDIOM_IS_PHONE && [[UIScreen mainScreen] bounds].size.height == 480)? YES : NO
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_IOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_IOS9 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)

#define NSStringFromBOOL(boolValue) boolValue? @"YES" : @"NO"

static inline NSString *NSStringFromUIInterfaceOrientation(UIInterfaceOrientation orientation) {
	switch (orientation) {
		case UIInterfaceOrientationPortrait:           return @"UIInterfaceOrientationPortrait";
		case UIInterfaceOrientationPortraitUpsideDown: return @"UIInterfaceOrientationPortraitUpsideDown";
		case UIInterfaceOrientationLandscapeLeft:      return @"UIInterfaceOrientationLandscapeLeft";
		case UIInterfaceOrientationLandscapeRight:     return @"UIInterfaceOrientationLandscapeRight";
        default:                                       return @"Unexpected";
	}
}

#define UIInterfaceOrientationIsSupportedOrientation(orientation) ([[[NSBundle mainBundle] objectForInfoDictionaryKey:@"UISupportedInterfaceOrientations"] indexOfObject:NSStringFromUIInterfaceOrientation(orientation)] != NSNotFound)
