#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameflowRegionLocale { 
    std::string locale;
    std::string region; 
  };
  void to_json(json& j, const LolGameflowRegionLocale& v) {
  j["locale"] = v.locale; 
  j["region"] = v.region; 
  }
  void from_json(const json& j, LolGameflowRegionLocale& v) {
  v.locale = j.at("locale").get<std::string>(); 
  v.region = j.at("region").get<std::string>(); 
  }
}