/* AQTPrefController */

#import <Cocoa/Cocoa.h>

#define preferences [NSUserDefaults standardUserDefaults]

@interface AQTPrefController : NSObject
{
   IBOutlet NSWindow *prefWindow;
   IBOutlet NSPopUpButton *imageInterpolateLevel;
   IBOutlet NSButton *shouldAntialiasSwitch;
   IBOutlet NSButton *limitMinimumLinewidthSwitch;
   IBOutlet NSButton *convertSymbolFontSwitch;
   IBOutlet NSButton *closeWindowSwitch;
   IBOutlet NSButton *confirmCloseWindowSwitch;
   IBOutlet NSButton *showProcessNameSwitch;
   IBOutlet NSButton *showProcessIdSwitch;
   IBOutlet NSTextField *titleExample;
}
+ (AQTPrefController *)sharedPrefController;
- (void)showPrefs;
- (IBAction)windowClosingChanged:(id)sender;
- (IBAction)updateTitleExample:(id)sender;
- (IBAction)cancelButtonPressed:(id)sender;
- (IBAction)OKButtonPressed:(id)sender;
@end
