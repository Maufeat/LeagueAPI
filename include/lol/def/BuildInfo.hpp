#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BuildInfo { 
    std::string gameBranchFull;
    std::string patchline;
    std::string branchFull;
    int32_t codeBuildId;
    std::string version;
    int32_t contentBuildId;
    std::string gameBranch;
    std::string branch;
    std::string patchlineVisibleName;
    int32_t gameDataBuildId; 
  };
  inline void to_json(json& j, const BuildInfo& v) {
    j["gameBranchFull"] = v.gameBranchFull; 
    j["patchline"] = v.patchline; 
    j["branchFull"] = v.branchFull; 
    j["codeBuildId"] = v.codeBuildId; 
    j["version"] = v.version; 
    j["contentBuildId"] = v.contentBuildId; 
    j["gameBranch"] = v.gameBranch; 
    j["branch"] = v.branch; 
    j["patchlineVisibleName"] = v.patchlineVisibleName; 
    j["gameDataBuildId"] = v.gameDataBuildId; 
  }
  inline void from_json(const json& j, BuildInfo& v) {
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>(); 
    v.patchline = j.at("patchline").get<std::string>(); 
    v.branchFull = j.at("branchFull").get<std::string>(); 
    v.codeBuildId = j.at("codeBuildId").get<int32_t>(); 
    v.version = j.at("version").get<std::string>(); 
    v.contentBuildId = j.at("contentBuildId").get<int32_t>(); 
    v.gameBranch = j.at("gameBranch").get<std::string>(); 
    v.branch = j.at("branch").get<std::string>(); 
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>(); 
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>(); 
  }
}