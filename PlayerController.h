//
//  PlayerController.h
//  ScoreKeeper
//
//  Created by sombra on 2015-02-12.
//  Copyright (c) 2015 sombra. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Player.h"

@interface PlayerController : NSObject

@property (nonatomic, strong, readonly) NSArray *players;

+ (PlayerController *)sharedInstance;

- (void)addPlayer:(Player *)player;
- (void)removePlayer:(Player *)player;
- (void)replacePlayer:(Player *)oldPlayer withPlayer:(Player *)newPlayer;
- (void)moveFromIndex:(NSInteger)oldIndex toNewIndex:(NSInteger)newIndex;

@end
