#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClientDynamicConfig { 
    bool compressed;
    bool delta;
    std::string configs; 
  };
  inline void to_json(json& j, const ClientDynamicConfig& v) {
    j["compressed"] = v.compressed; 
    j["delta"] = v.delta; 
    j["configs"] = v.configs; 
  }
  inline void from_json(const json& j, ClientDynamicConfig& v) {
    v.compressed = j.at("compressed").get<bool>(); 
    v.delta = j.at("delta").get<bool>(); 
    v.configs = j.at("configs").get<std::string>(); 
  }
}