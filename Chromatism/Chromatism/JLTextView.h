//
//  JLTextView.h
//  Chromatism
//
//  Created by Johannes Lund on 2013-07-16.
//  Copyright (c) 2013 Anviking. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Chromatism+Internal.h"
#import "JLTokenizer.h"

@class JLTokenizer;

@interface JLTextView : UITextView <UITextViewDelegate, NSLayoutManagerDelegate, JLTokenizerDataSource>

@property (nonatomic, strong) JLTokenizer *syntaxTokenizer;
@property (nonatomic, assign) JLTokenizerTheme theme;
@end
