//
//  Protection.h
//  PocSDK
//
//  Created by Dmitry Grigansky on 23/08/2017.
//  Copyright © 2017 Malwarebytes. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Protection <NSObject>

- (void)startScan;
- (void)stopScan;

@end
