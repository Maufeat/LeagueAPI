#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2HonorConfig { 
    int32_t SecondsToVote;
    bool Enabled;
    bool Honor2018Enabled;
    bool DayOneModalEnabled; 
  };
  inline void to_json(json& j, const LolHonorV2HonorConfig& v) {
    j["SecondsToVote"] = v.SecondsToVote; 
    j["Enabled"] = v.Enabled; 
    j["Honor2018Enabled"] = v.Honor2018Enabled; 
    j["DayOneModalEnabled"] = v.DayOneModalEnabled; 
  }
  inline void from_json(const json& j, LolHonorV2HonorConfig& v) {
    v.SecondsToVote = j.at("SecondsToVote").get<int32_t>(); 
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.Honor2018Enabled = j.at("Honor2018Enabled").get<bool>(); 
    v.DayOneModalEnabled = j.at("DayOneModalEnabled").get<bool>(); 
  }
}