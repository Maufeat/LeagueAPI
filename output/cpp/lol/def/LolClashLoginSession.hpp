#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashLoginSessionState.hpp>
namespace lol {
  struct LolClashLoginSession { 
    LolClashLoginSessionState state;
    std::optional<uint64_t> summonerId; 
  };
  inline void to_json(json& j, const LolClashLoginSession& v) {
    j["state"] = v.state; 
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
  }
  inline void from_json(const json& j, LolClashLoginSession& v) {
    v.state = j.at("state").get<LolClashLoginSessionState>(); 
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<std::optional<uint64_t>>(); 
  }
}