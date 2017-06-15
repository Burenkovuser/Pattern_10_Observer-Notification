//
//  StandardSubjectImplementation.h
//  Observer Notification
//
//  Created by Vasilii on 15.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StandardSubject.h"

@interface StandardSubjectImplementation : NSObject <StandardSubject>
{
    @private NSString *_valueName;
    @private NSString *_newValue;
}

@property (nonatomic, strong) NSMutableSet *observerCollection;

-(void)changeValue:(NSString *)valueName andValue:(NSString *) newValue;

@end
