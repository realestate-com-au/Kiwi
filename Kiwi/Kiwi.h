//
// Licensed under the terms in License.txt
//
// Copyright 2010 Allen Ding. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <XCTest/XCTest.h>

//! Project version number for Kiwi.
FOUNDATION_EXPORT double KiwiVersionNumber;

//! Project version string for Kiwi.
FOUNDATION_EXPORT const unsigned char KiwiVersionString[];

// This needs to come first.
#import "KiwiConfiguration.h"

#if defined(__cplusplus)
extern "C" {
#endif

#import "KWAfterAllNode.h"
#import "KWAfterEachNode.h"
#import "KWAny.h"
#import "KWAsyncVerifier.h"
#import "KWBeforeAllNode.h"
#import "KWBeforeEachNode.h"
#import "KWBlock.h"
#import "KWBlockNode.h"
#import "KWCallSite.h"
#import "KWCaptureSpy.h"
#import "KWContextNode.h"
#import "KWCountType.h"
#import "KWDeviceInfo.h"
#import "KWExample.h"
#import "KWExampleDelegate.h"
#import "KWExampleNode.h"
#import "KWExampleNodeVisitor.h"
#import "KWExampleSuiteBuilder.h"
#import "KWExistVerifier.h"
#import "KWExpectationType.h"
#import "KWFailure.h"
#import "KWFormatter.h"
#import "KWFutureObject.h"
#import "KWInvocationCapturer.h"
#import "KWItNode.h"
#import "KWLet.h"
#import "KWMessagePattern.h"
#import "KWMessageSpying.h"
#import "KWMock.h"
#import "KWNull.h"
#import "KWObjCUtilities.h"
#import "KWPendingNode.h"
#import "KWProbe.h"
#import "KWReporting.h"
#import "KWSharedExample.h"
#import "KWSpec.h"
#import "KWStringUtilities.h"
#import "KWStub.h"
#import "KWSuiteConfigurationBase.h"
#import "KWValue.h"
#import "KWVerifying.h"

// Matchers
#ifndef KIWI_DISABLE_MATCHERS

#import "KWBeBetweenMatcher.h"
#import "KWBeEmptyMatcher.h"
#import "KWBeIdenticalToMatcher.h"
#import "KWBeKindOfClassMatcher.h"
#import "KWBeMemberOfClassMatcher.h"
#import "KWBeSubclassOfClassMatcher.h"
#import "KWBeTrueMatcher.h"
#import "KWBeWithinMatcher.h"
#import "KWBeZeroMatcher.h"
#import "KWBlockRaiseMatcher.h"
#import "KWChangeMatcher.h"
#import "KWConformToProtocolMatcher.h"
#import "KWContainMatcher.h"
#import "KWContainStringMatcher.h"
#import "KWEqualMatcher.h"
#import "KWGenericMatcher.h"
#import "KWHaveMatcher.h"
#import "KWHaveValueMatcher.h"
#import "KWInequalityMatcher.h"
#import "KWMatchVerifier.h"
#import "KWMatcher.h"
#import "KWMatcherFactory.h"
#import "KWMatchers.h"
#import "KWMatching.h"
#import "KWNilMatcher.h"
#import "KWNotificationMatcher.h"
#import "KWReceiveMatcher.h"
#import "KWRegisterMatchersNode.h"
#import "KWRegularExpressionPatternMatcher.h"
#import "KWRespondToSelectorMatcher.h"
#import "KWStringContainsMatcher.h"
#import "KWStringPrefixMatcher.h"
#import "KWUserDefinedMatcher.h"

#endif

// Public Foundation Categories
#import "NSObject+KiwiMockAdditions.h"
#import "NSObject+KiwiSpyAdditions.h"
#import "NSObject+KiwiStubAdditions.h"
#import "NSObject+KiwiVerifierAdditions.h"
#import "NSProxy+KiwiVerifierAdditions.h"

#import "KiwiMacros.h"

// Some Foundation headers use Kiwi keywords (e.g. 'should') as identifiers for
// parameter names. Including this last allows the use of Kiwi keywords without
// conflicting with these headers (hopefully!).
#import "KiwiBlockMacros.h"

#if defined(__cplusplus)
}
#endif
