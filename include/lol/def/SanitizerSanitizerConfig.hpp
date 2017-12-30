#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SanitizerSanitizerConfig { 
    std::optional<std::string> Level1Unfilter;
    std::optional<std::string> Level0Unfilter;
    std::optional<std::string> Level2Unfilter;
    std::optional<std::string> Level3Unfilter;
    std::optional<std::string> Level2Filter;
    std::optional<std::string> Level0Filter;
    std::optional<std::string> Level3Filter;
    std::optional<std::string> Level1Filter; 
  };
  inline void to_json(json& j, const SanitizerSanitizerConfig& v) {
    if(v.Level1Unfilter)
      j["Level1Unfilter"] = *v.Level1Unfilter;
    if(v.Level0Unfilter)
      j["Level0Unfilter"] = *v.Level0Unfilter;
    if(v.Level2Unfilter)
      j["Level2Unfilter"] = *v.Level2Unfilter;
    if(v.Level3Unfilter)
      j["Level3Unfilter"] = *v.Level3Unfilter;
    if(v.Level2Filter)
      j["Level2Filter"] = *v.Level2Filter;
    if(v.Level0Filter)
      j["Level0Filter"] = *v.Level0Filter;
    if(v.Level3Filter)
      j["Level3Filter"] = *v.Level3Filter;
    if(v.Level1Filter)
      j["Level1Filter"] = *v.Level1Filter;
  }
  inline void from_json(const json& j, SanitizerSanitizerConfig& v) {
    if(auto it = j.find("Level1Unfilter"); it != j.end() && !it->is_null())
      v.Level1Unfilter = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("Level0Unfilter"); it != j.end() && !it->is_null())
      v.Level0Unfilter = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("Level2Unfilter"); it != j.end() && !it->is_null())
      v.Level2Unfilter = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("Level3Unfilter"); it != j.end() && !it->is_null())
      v.Level3Unfilter = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("Level2Filter"); it != j.end() && !it->is_null())
      v.Level2Filter = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("Level0Filter"); it != j.end() && !it->is_null())
      v.Level0Filter = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("Level3Filter"); it != j.end() && !it->is_null())
      v.Level3Filter = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("Level1Filter"); it != j.end() && !it->is_null())
      v.Level1Filter = it->get<std::optional<std::string>>(); 
  }
}