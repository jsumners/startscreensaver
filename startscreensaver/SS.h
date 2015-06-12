#import <Cocoa/Cocoa.h>
#import <ScreenSaver/ScreenSaver.h>

@protocol ScreenSaverControl
- (void)screenSaverDidFadeInBackground:(BOOL)arg1 psnHi:(unsigned int)arg2 psnLow:(unsigned int)arg3;
- (BOOL)screenSaverIsRunningInBackground;
- (double)screenSaverTimeRemaining;
- (void)restartForUser:(id)arg1;
- (void)screenSaverStopNowWithOptions:(id)arg1;
- (void)screenSaverStopNow;
- (void)screenSaverStartNow;
- (void)setScreenSaverCanRun:(BOOL)arg1;
- (BOOL)screenSaverCanRun;
- (BOOL)screenSaverIsRunning;
@end

@interface ScreenSaverController : NSObject <ScreenSaverControl>
{
  void *_reserved;
}

+ (id)enginePath;
+ (id)controller;
- (void)screenSaverDidFadeInBackground:(BOOL)arg1 psnHi:(unsigned int)arg2 psnLow:(unsigned int)arg3;
- (BOOL)screenSaverIsRunningInBackground;
- (double)screenSaverTimeRemaining;
- (void)restartForUser:(id)arg1;
- (void)screenSaverStopNow;
- (void)screenSaverStopNowWithOptions:(id)arg1;
- (void)screenSaverStartNow;
- (void)setScreenSaverCanRun:(BOOL)arg1;
- (BOOL)screenSaverCanRun;
- (BOOL)screenSaverIsRunning;
- (void)dealloc;
- (id)init;

@end