#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2HonorConfig { 
    bool Enabled;
    bool Honor2018Enabled;
    bool DayOneModalEnabled;
    int32_t SecondsToVote; 
  };
  inline void to_json(json& j, const LolHonorV2HonorConfig& v) {
    j["Enabled"] = v.Enabled; 
    j["Honor2018Enabled"] = v.Honor2018Enabled; 
    j["DayOneModalEnabled"] = v.DayOneModalEnabled; 
    j["SecondsToVote"] = v.SecondsToVote; 
  }
  inline void from_json(const json& j, LolHonorV2HonorConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.Honor2018Enabled = j.at("Honor2018Enabled").get<bool>(); 
    v.DayOneModalEnabled = j.at("DayOneModalEnabled").get<bool>(); 
    v.SecondsToVote = j.at("SecondsToVote").get<int32_t>(); 
  }
}