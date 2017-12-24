#pragma once
#include "../base_def.hpp" 
#include "LolClashLoginSessionState.hpp"
namespace lol {
  struct LolClashLoginSession { 
    std::optional<uint64_t> summonerId;
    LolClashLoginSessionState state; 
  };
  inline void to_json(json& j, const LolClashLoginSession& v) {
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolClashLoginSession& v) {
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<std::optional<uint64_t>>(); 
    v.state = j.at("state").get<LolClashLoginSessionState>(); 
  }
}