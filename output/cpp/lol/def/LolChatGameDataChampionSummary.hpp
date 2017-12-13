#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatGameDataChampionSummary { 
    std::string alias;
    int32_t id; 
  };
  void to_json(json& j, const LolChatGameDataChampionSummary& v) {
  j["alias"] = v.alias; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolChatGameDataChampionSummary& v) {
  v.alias = j.at("alias").get<std::string>(); 
  v.id = j.at("id").get<int32_t>(); 
  }
}