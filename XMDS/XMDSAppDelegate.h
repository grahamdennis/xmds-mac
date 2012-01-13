//
//  XMDSAppDelegate.h
//  XMDS
//
//  Created by Graham Dennis on 10/01/12.
//  Copyright (c) 2012 Australian National University. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface XMDSAppDelegate : NSObject <NSApplicationDelegate>
{
    NSWindow *_window;
}

@property (assign) IBOutlet NSWindow *window;
@property (readonly) NSString *usrPath;

- (IBAction)launchXMDSTerminal:(id)sender;

@end
