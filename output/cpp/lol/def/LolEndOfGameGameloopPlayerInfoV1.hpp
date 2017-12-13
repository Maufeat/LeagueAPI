#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEndOfGameRerollDataBagForClientV1.hpp>
namespace lol {
  struct LolEndOfGameGameloopPlayerInfoV1 { 
    LolEndOfGameRerollDataBagForClientV1 rerollDataBag; 
  };
  void to_json(json& j, const LolEndOfGameGameloopPlayerInfoV1& v) {
    j["rerollDataBag"] = v.rerollDataBag; 
  }
  void from_json(const json& j, LolEndOfGameGameloopPlayerInfoV1& v) {
    v.rerollDataBag = j.at("rerollDataBag").get<LolEndOfGameRerollDataBagForClientV1>(); 
  }
}