#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"
#include "dna.cpp"

TEST_CASE("Test round with precision")
{
	REQUIRE(round_to_precision(55.95963, 2) == 55.96);
	REQUIRE(round_to_precision(55.95463, 2) == 55.95);
}


TEST_CASE("Test get point mutations", "Dna strings ") {
	//test not equal in length return value of -1
	REQUIRE(get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG") == -1);
	REQUIRE(get_point_mutations("GAGCCTACTAACGGGAT", "GAGCCTACTAACGGGAT") == 0);
	REQUIRE(get_point_mutations("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCAT") == 5);
	REQUIRE(get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == 7);
}

TEST_CASE("Test get DNA compliment") 
{
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}



TEST_CASE("Test for Transcribe DNA into RNA")
{
	REQUIRE(transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT") == "GAUGGAACUUGACUACGUAAAUU");
	REQUIRE(transcribe_dna_into_rna("AAATTGATCTTGACTACGTGGAA") == "AAAUUGAUCUUGACUACGUGGAA");

}


TEST_CASE("Test For Get GC Content")
{
	REQUIRE(get_gc_content("CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT") == 60.92);

}
