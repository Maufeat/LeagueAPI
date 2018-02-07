#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SanitizerSanitizerStatus { 
    bool ready;
    std::string region;
    std::string locale;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
    uint32_t allowedCharsCount;
    uint32_t breakingCharsCount;
    uint32_t projectedCharsCount; 
  };
  inline void to_json(json& j, const SanitizerSanitizerStatus& v) {
    j["ready"] = v.ready; 
    j["region"] = v.region; 
    j["locale"] = v.locale; 
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel; 
    j["allowedCharsCount"] = v.allowedCharsCount; 
    j["breakingCharsCount"] = v.breakingCharsCount; 
    j["projectedCharsCount"] = v.projectedCharsCount; 
  }
  inline void from_json(const json& j, SanitizerSanitizerStatus& v) {
    v.ready = j.at("ready").get<bool>(); 
    v.region = j.at("region").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>(); 
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>(); 
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>(); 
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>(); 
  }
}