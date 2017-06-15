//
//  StandardSubject.h
//  Observer Notification
//
//  Created by Vasilii on 15.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StandardObserver.h"

@protocol StandardSubject <NSObject>

-(void) addObserver:(id<StandardObserver>) observer;
-(void) removeObserver:(id<StandardObserver>) observer;
-(void) notifyObjects;

@end
