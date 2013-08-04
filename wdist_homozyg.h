#ifndef __WDIST_HOMOZYG_H__
#define __WDIST_HOMOZYG_H__

#include "wdist_common.h"

typedef struct {
  uint32_t modifier;
  uint32_t min_snp;
  uint32_t min_bases;
  double max_bases_per_snp;
  uint32_t max_gap;
  uint32_t max_hets;
  uint32_t window_size;
  uint32_t window_max_hets;
  uint32_t window_max_missing;
  double hit_threshold;
  double overlap_min;
  uint32_t pool_size_min;
} Homozyg_info;

#define HOMOZYG_GROUP 1
#define HOMOZYG_GROUP_VERBOSE 2
#define HOMOZYG_CONSENSUS_MATCH 4
#define HOMOZYG_OLD_LENGTHS 8

void homozyg_init(Homozyg_info* homozyg_ptr);

int32_t calc_homozyg(Homozyg_info* hp, FILE* bedfile, uintptr_t bed_offset, uint32_t marker_ct, uintptr_t unfiltered_marker_ct, uintptr_t* marker_exclude, char* marker_ids, uintptr_t max_marker_id_len, uint32_t plink_maxsnp, char* marker_alleles, uintptr_t max_marker_allele_len, uintptr_t* marker_reverse, uint32_t zero_extra_chroms, Chrom_info* chrom_info_ptr, uint32_t* marker_pos, uintptr_t indiv_ct, uintptr_t unfiltered_indiv_ct, uintptr_t* indiv_exclude, char* person_ids, uint32_t plink_maxfid, uint32_t plink_maxiid, uintptr_t max_person_id_len, char* outname, char* outname_end, uintptr_t* pheno_nm, uintptr_t* pheno_c, double* pheno_d, int32_t missing_pheno, uintptr_t* sex_male);

#endif // __WDIST_HOMOZYG_H__
