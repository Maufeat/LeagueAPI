#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashPlayerData { 
    int32_t tickets; 
  };
  void to_json(json& j, const LolClashPlayerData& v) {
    j["tickets"] = v.tickets; 
  }
  void from_json(const json& j, LolClashPlayerData& v) {
    v.tickets = j.at("tickets").get<int32_t>(); 
  }
}