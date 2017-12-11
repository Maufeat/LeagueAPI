#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/ClubMembershipDto.hpp>
#include <leagueapi/definitions/ClubDataDto.hpp>

namespace leagueapi {
  struct ClubDto { /**/ 
    ClubMembershipDto membership;/**/
    std::string platformId;/**/
    std::string resourceUri;/**/
    ClubDataDto clubData;/**/
  };
  static void to_json(json& j, const ClubDto& v) { 
    j["membership"] = v.membership;
    j["platformId"] = v.platformId;
    j["resourceUri"] = v.resourceUri;
    j["clubData"] = v.clubData;
  }
  static void from_json(const json& j, ClubDto& v) { 
    v.membership = j.at("membership").get<ClubMembershipDto>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.resourceUri = j.at("resourceUri").get<std::string>(); 
    v.clubData = j.at("clubData").get<ClubDataDto>(); 
  }
} 