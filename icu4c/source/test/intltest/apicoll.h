// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html
/***********************************************************************
 * COPYRIGHT: 
 * Copyright (c) 1997-2014, International Business Machines Corporation
 * and others. All Rights Reserved.
 ***********************************************************************/

/**
 * CollationAPITest is a third level test class. This test performs API 
 * related tests for the Collation framework.
 */

#ifndef _APICOLL
#define _APICOLL

#include "unicode/utypes.h"

#if !UCONFIG_NO_COLLATION

#include "unicode/tblcoll.h"
#include "tscoll.h"

class CollationAPITest: public IntlTestCollator {
public:
    void runIndexedTest( int32_t index, UBool exec, const char* &name, char* /*par = NULL */);
    void doAssert(UBool condition, const char *message);

    /**
     * This tests the properties of a collator object.
     * - constructor/destructor
     * - factory method createInstance
     * - compare and getCollationKey
     * - get/set decomposition mode and comparison level
     * - displayable name in the desired locale
     */
    void TestProperty(/* char* par */);
    void TestKeywordValues();

    /**
    * This tests the RuleBasedCollator
    * - constructor/destructor
    * - getRules
    */
    void TestRuleBasedColl(/* char* par */);

    /**
    * This tests the RuleBasedCollator
    * - getRules
    */
    void TestRules(/* char* par */);

    /**
    * Tests decomposition setting
    */
    void TestDecomposition();

    /**
    * SafeClone test
    */
    void TestSafeClone();

    /**
     * This tests the properties of a rule based collator object.
     * - constructor/destructor
     * - == and != operators
     * - clone and copy
     * - collation rules access
     */
    void TestOperators(/* char* par */);

    /**
     * This tests the duplication of a collator object.
     */
    void TestDuplicate(/* char* par */);

    /**
     * This tests the comparison convenience methods of a collator object.
     * - greater than
     * - greater than or equal to
     * - equal to
     */
    void TestCompare(/* char* par */);

    /**
     * This tests the hashCode method of a collator object.
     */
    void TestHashCode(/* char* par */);

    /**
     * This tests the collation key related APIs.
     * - constructor/destructor
     * - Collator::getCollationKey
     * - == and != operators
     * - comparison between collation keys
     * - creating collation key with a byte array and vice versa
     */
    void TestCollationKey(/* char* par */);

    /**
     * This tests the CollationElementIterator related APIs.
     * - creation of a CollationElementIterator object
     * - == and != operators
     * - iterating forward
     * - reseting the iterator index
     * - requesting the order properties(primary, secondary or tertiary)
     */
    void TestElemIter(/* char* par */);

    /**
     * This tests the list the all available locales.
     */
    void TestGetAll(/* char* par */);

    /**
     * This tests the sort keys generated by collator
     */
    void TestSortKey();
    void TestSortKeyOverflow();

    /**
     * This tests getMaxExpansion
     */
    void TestMaxExpansion();

    /**
    * Tests the retrieval of names given a locale
    */
    void TestDisplayName();

    /** 
    * Tests the collator attributes
    */
    void TestAttribute();

    /** 
    * Tests the setters and getters of variable top
    */
    void TestVariableTopSetting();
    void TestMaxVariable();

    /**
    * Tests GetLocale for a Collator
    */
    void TestGetLocale();

    /**
    * Tests bounds API
    */
    void TestBounds();

    /**
    * Tests getTailoredSet API
    */
    void TestGetTailoredSet();

    /**
    * Tests the subclassability
    */
    void TestSubclass();

    /**
    * Tests the dynamic and static ids of collation classes
    */
    void TestUClassID();

    /**
    * Test NULL
    */
    void TestNULLCharTailoring();

    void TestClone();
    void TestCloneBinary();
    void TestIterNumeric();
    void TestBadKeywords();

private:
    // If this is too small for the test data, just increase it.
    // Just don't make it too large, otherwise the executable will get too big
    enum EToken_Len { MAX_TOKEN_LEN = 16 };

    void dump(UnicodeString msg, RuleBasedCollator* c, UErrorCode& status);

};

#endif /* #if !UCONFIG_NO_COLLATION */

#endif
