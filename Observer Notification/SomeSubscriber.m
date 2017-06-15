//
//  SomeSubscriber.m
//  Observer Notification
//
//  Created by Vasilii on 15.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "SomeSubscriber.h"

@implementation SomeSubscriber

- (void)valueChanged:(NSString *)valueName newValue:(NSString *)newValue
{
    NSLog(@"And some subscriber tells: Hmm, value %@ changed to %@", valueName, newValue);
}

@end
