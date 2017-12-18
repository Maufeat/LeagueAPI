#pragma once
#include "../base_def.hpp" 
#include "ClubMembershipDto.hpp"
#include "ClubDataDto.hpp"
namespace lol {
  struct ClubDto { 
    ClubDataDto clubData;
    ClubMembershipDto membership;
    std::string platformId;
    std::string resourceUri; 
  };
  inline void to_json(json& j, const ClubDto& v) {
    j["clubData"] = v.clubData; 
    j["membership"] = v.membership; 
    j["platformId"] = v.platformId; 
    j["resourceUri"] = v.resourceUri; 
  }
  inline void from_json(const json& j, ClubDto& v) {
    v.clubData = j.at("clubData").get<ClubDataDto>(); 
    v.membership = j.at("membership").get<ClubMembershipDto>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.resourceUri = j.at("resourceUri").get<std::string>(); 
  }
}