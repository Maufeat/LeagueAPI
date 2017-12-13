#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClubDataDto.hpp>
#include <lol/def/ClubMembershipDto.hpp>
namespace lol {
  struct ClubDto { 
    ClubMembershipDto membership;
    std::string platformId;
    std::string resourceUri;
    ClubDataDto clubData; 
  };
  void to_json(json& j, const ClubDto& v) {
  j["membership"] = v.membership; 
  j["platformId"] = v.platformId; 
  j["resourceUri"] = v.resourceUri; 
  j["clubData"] = v.clubData; 
  }
  void from_json(const json& j, ClubDto& v) {
  v.membership = j.at("membership").get<ClubMembershipDto>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  v.resourceUri = j.at("resourceUri").get<std::string>(); 
  v.clubData = j.at("clubData").get<ClubDataDto>(); 
  }
}