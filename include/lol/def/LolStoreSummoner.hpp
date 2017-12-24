#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreSummoner { 
    uint64_t sumId;
    uint64_t acctId; 
  };
  inline void to_json(json& j, const LolStoreSummoner& v) {
    j["sumId"] = v.sumId; 
    j["acctId"] = v.acctId; 
  }
  inline void from_json(const json& j, LolStoreSummoner& v) {
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
  }
}