//  FISAppDelegate.h

#import <UIKit/UIKit.h>

@interface FISAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


- (NSString*)stringWithDeliLine:(NSMutableArray*)deliLine;
- (NSMutableArray*)addName:(NSString*)name toDeliLine:(NSMutableArray*)deliLine;
- (NSString*)serveNextCustomerInDeliLine:(NSMutableArray*)deliLine;

@end
