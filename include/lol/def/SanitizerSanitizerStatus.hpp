#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SanitizerSanitizerStatus { 
    bool ready;
    std::string locale;
    uint32_t breakingCharsCount;
    std::string region;
    uint32_t allowedCharsCount;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
    uint32_t projectedCharsCount; 
  };
  inline void to_json(json& j, const SanitizerSanitizerStatus& v) {
    j["ready"] = v.ready; 
    j["locale"] = v.locale; 
    j["breakingCharsCount"] = v.breakingCharsCount; 
    j["region"] = v.region; 
    j["allowedCharsCount"] = v.allowedCharsCount; 
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel; 
    j["projectedCharsCount"] = v.projectedCharsCount; 
  }
  inline void from_json(const json& j, SanitizerSanitizerStatus& v) {
    v.ready = j.at("ready").get<bool>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>(); 
    v.region = j.at("region").get<std::string>(); 
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>(); 
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>(); 
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>(); 
  }
}