#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClubDataDto.hpp>
#include <lol/def/ClubMembershipDto.hpp>
namespace lol {
  struct ClubDto { 
    ClubDataDto clubData;
    ClubMembershipDto membership;
    std::string platformId;
    std::string resourceUri; 
  };
  void to_json(json& j, const ClubDto& v) {
    j["clubData"] = v.clubData; 
    j["membership"] = v.membership; 
    j["platformId"] = v.platformId; 
    j["resourceUri"] = v.resourceUri; 
  }
  void from_json(const json& j, ClubDto& v) {
    v.clubData = j.at("clubData").get<ClubDataDto>(); 
    v.membership = j.at("membership").get<ClubMembershipDto>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.resourceUri = j.at("resourceUri").get<std::string>(); 
  }
}