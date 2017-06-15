//
//  OtherSubscriber.m
//  Observer Notification
//
//  Created by Vasilii on 15.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "OtherSubscriber.h"

@implementation OtherSubscriber

- (void)valueChanged:(NSString *)valueName newValue:(NSString *)newValue
{
    NSLog(@"And some another subscriber tells: Hmm, value %@ changed to %@", valueName, newValue);
}

@end
