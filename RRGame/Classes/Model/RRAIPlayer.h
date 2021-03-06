//
//  RRAI.h
//  RRHeredox
//
//  Created by Rolandas Razma on 7/16/12.
//
//  Copyright (c) 2012 Rolandas Razma <rolandas@razma.lt>
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#import <Foundation/Foundation.h>
#import "RRPlayer.h"

@class RRBoardLayer;


typedef enum RRAILevel : int {
    RRAILevelNovice = -1,
    RRAILevelDeacon = 0,
    RRAILevelAbbot  = 1,
} RRAILevel;


@interface RRAIPlayer : RRPlayer {
    RRAILevel   _dificultyLevel;
    NSSet       *_tilesInDeck;
}

@property (nonatomic, assign) RRAILevel dificultyLevel;
@property (nonatomic, assign) NSSet     *tilesInDeck;
@property (nonatomic, readonly) RRPlayerColor oponentColor;

- (RRTileMove)bestMoveOnBoard:(RRBoardLayer *)gameBoard;

@end
