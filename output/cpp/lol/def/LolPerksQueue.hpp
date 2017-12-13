#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksQueue { 
    int32_t id; 
  };
  void to_json(json& j, const LolPerksQueue& v) {
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolPerksQueue& v) {
    v.id = j.at("id").get<int32_t>(); 
  }
}