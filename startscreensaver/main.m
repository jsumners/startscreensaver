#import <Foundation/Foundation.h>
#import "SS.h"

int main(int argc, const char * argv[]) {
  @autoreleasepool {
    ScreenSaverController *controller = [ScreenSaverController controller];
    [controller screenSaverStartNow];
    
    while (![controller screenSaverIsRunning]) {}
  }
  
  return 0;
}
