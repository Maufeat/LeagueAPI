#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClubsPublicClubPreferences { 
    bool shareClubAffiliation; 
  };
  inline void to_json(json& j, const LolClubsPublicClubPreferences& v) {
    j["shareClubAffiliation"] = v.shareClubAffiliation; 
  }
  inline void from_json(const json& j, LolClubsPublicClubPreferences& v) {
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>(); 
  }
}