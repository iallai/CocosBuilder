//
//  ServerController.h
//  CocosPlayer
//
//  Created by Viktor Lidholt on 7/13/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ThoMoServerStub.h"
#import "cocos2d.h"

@interface ServerController : NSObject <ThoMoServerDelegateProtocol>
{
    ThoMoServerStub* server;
    
    NSMutableSet* connectedClients;
}

- (void) start;

@end
