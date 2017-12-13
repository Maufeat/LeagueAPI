#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2HonorConfig { 
    bool DayOneModalEnabled;
    bool Enabled;
    int32_t SecondsToVote;
    bool Honor2018Enabled; 
  };
  void to_json(json& j, const LolHonorV2HonorConfig& v) {
  j["DayOneModalEnabled"] = v.DayOneModalEnabled; 
  j["Enabled"] = v.Enabled; 
  j["SecondsToVote"] = v.SecondsToVote; 
  j["Honor2018Enabled"] = v.Honor2018Enabled; 
  }
  void from_json(const json& j, LolHonorV2HonorConfig& v) {
  v.DayOneModalEnabled = j.at("DayOneModalEnabled").get<bool>(); 
  v.Enabled = j.at("Enabled").get<bool>(); 
  v.SecondsToVote = j.at("SecondsToVote").get<int32_t>(); 
  v.Honor2018Enabled = j.at("Honor2018Enabled").get<bool>(); 
  }
}