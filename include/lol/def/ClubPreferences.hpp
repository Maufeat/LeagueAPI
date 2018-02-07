#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubPreferences { 
    std::string primaryClubKey;
    bool shareClubAffiliation; 
  };
  inline void to_json(json& j, const ClubPreferences& v) {
    j["primaryClubKey"] = v.primaryClubKey; 
    j["shareClubAffiliation"] = v.shareClubAffiliation; 
  }
  inline void from_json(const json& j, ClubPreferences& v) {
    v.primaryClubKey = j.at("primaryClubKey").get<std::string>(); 
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>(); 
  }
}