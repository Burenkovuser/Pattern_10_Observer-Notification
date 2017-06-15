//
//  StandardObserver.h
//  Observer Notification
//
//  Created by Vasilii on 15.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol StandardObserver <NSObject>

-(void) valueChanged:(NSString *)valueName newValue:(NSString *) newValue;

@end
