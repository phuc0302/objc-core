//  Project name: FwiCore
//  File name   : NSString+FwiExtension.h
//
//  Author      : Phuc, Tran Huu
//  Created date: 9/23/12
//  Version     : 1.20
//  --------------------------------------------------------------
//  Copyright © 2012, 2016 Fiision Studio.
//  All Rights Reserved.
//  --------------------------------------------------------------
//
//  Permission is hereby granted, free of charge, to any person obtaining  a  copy
//  of this software and associated documentation files (the "Software"), to  deal
//  in the Software without restriction, including without limitation  the  rights
//  to use, copy, modify, merge,  publish,  distribute,  sublicense,  and/or  sell
//  copies of the Software,  and  to  permit  persons  to  whom  the  Software  is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF  ANY  KIND,  EXPRESS  OR
//  IMPLIED, INCLUDING BUT NOT  LIMITED  TO  THE  WARRANTIES  OF  MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO  EVENT  SHALL  THE
//  AUTHORS OR COPYRIGHT HOLDERS  BE  LIABLE  FOR  ANY  CLAIM,  DAMAGES  OR  OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING  FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN  THE
//  SOFTWARE.
//
//
//  Disclaimer
//  __________
//  Although reasonable care has been taken to  ensure  the  correctness  of  this
//  software, this software should never be used in any application without proper
//  testing. Fiision Studio disclaim  all  liability  and  responsibility  to  any
//  person or entity with respect to any loss or damage caused, or alleged  to  be
//  caused, directly or indirectly, by the use of this software.

#import <Foundation/Foundation.h>


@interface NSString (FwiCreation)

/** Generate random identifier base on uuid. */
+ (__autoreleasing NSString *)randomIdentifier;

/** Generate timestamp string. */
+ (__autoreleasing NSString *)timestamp;

@end


@interface NSString (FwiExtension)

/** Compare 2 string regardless case sensitive. */
- (BOOL)isEqualToStringIgnoreCase:(NSString *)otherString;

/** Validate string. */
- (BOOL)matchPattern:(NSString *)pattern;
- (BOOL)matchPattern:(NSString *)pattern option:(NSRegularExpressionOptions)option;

/** Convert string to data. */
@property (NS_NONATOMIC_IOSONLY, readonly, strong) NSData *toData;
- (__autoreleasing NSData *)toDataWithEncoding:(NSStringEncoding)encoding;

/** Convert html string compatible to string. */
@property (NS_NONATOMIC_IOSONLY, readonly, strong) NSString *decodeHTML;
/** Convert string to html string compatible. */
@property (NS_NONATOMIC_IOSONLY, readonly, strong) NSString *encodeHTML;

/** Trim all spaces before and after a string. */
@property (NS_NONATOMIC_IOSONLY, readonly, strong) NSString *trim;

@end
