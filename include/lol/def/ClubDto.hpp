#pragma once
#include "../base_def.hpp" 
#include "ClubDataDto.hpp"
#include "ClubMembershipDto.hpp"
namespace lol {
  struct ClubDto { 
    ClubMembershipDto membership;
    std::string resourceUri;
    ClubDataDto clubData;
    std::string platformId; 
  };
  inline void to_json(json& j, const ClubDto& v) {
    j["membership"] = v.membership; 
    j["resourceUri"] = v.resourceUri; 
    j["clubData"] = v.clubData; 
    j["platformId"] = v.platformId; 
  }
  inline void from_json(const json& j, ClubDto& v) {
    v.membership = j.at("membership").get<ClubMembershipDto>(); 
    v.resourceUri = j.at("resourceUri").get<std::string>(); 
    v.clubData = j.at("clubData").get<ClubDataDto>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
}