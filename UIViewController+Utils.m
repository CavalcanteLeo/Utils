//
//  UIViewController+Utils.m
//  Intuit
//
//  Created by Глеб Тарасов on 11.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "UIViewController+Utils.h"

@implementation UIViewController (Utils)

+ (id)fromNib
{
    NSString *nibName = NSStringFromClass(self);
    return [self fromNib:nibName];
}

+ (id)fromNib:(NSString *)nibName
{
    return [[self alloc] initWithNibName:nibName bundle:nil];
}

@end
