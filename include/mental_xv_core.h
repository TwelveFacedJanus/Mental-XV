#ifndef MENTAL_XV_CORE_H_
#define MENTAL_XV_CORE_H_ 1

#ifdef __cplusplus
    extern "C" {
#endif

#define MENTAL_XV_VERSION_1_0

#ifndef MENTAL_API_ENTRY
    #define MENTAL_API_ENTRY

    #ifndef MENTAL_API_CALL
        #define MENTAL_API_CALL
    #endif
#endif

#define MT_API_SUFFIX__VERSION_1_0 MT_API_SUFFIX_COMMON



#include <stdint.h>

/**
 * @brief This macro retrieves the version variant of the API version.
 *
 * @details It shifts the 32-bit version integer to the right by 29 bits.
 * This means that it takes the three highest bits of the number (bits 31 through 29),
 * which represent the version variant.
 *
 * @param version The 32-bit version integer.
 * @return The version variant.
 */
#define MENTAL_XV_VERSION_VARIANT(version) ((uint32_t)(version) >> 29U)

/**
 * @brief This macro extracts the major version of the API.
 *
 * @details It shifts the 32-bit integer version to the right by 22 bits,
 * and then applies a bitwise AND with 0x7FU (which corresponds to 7 bits).
 * This extracts bits 28 through 22, which represent the major version.
 *
 * @param version The 32-bit version integer.
 * @return The major version.
 */
#define MENTAL_XV_VERSION_MAJOR(version) (((uint32_t)(version) >> 22U) & 0x7FU)

/**
 * @brief This macro extracts the minor version of the API.
 *
 * @details It shifts the 32-bit integer version to the right by 12 bits,
 * and then applies a bitwise AND with 0x3FFU (which corresponds to 10 bits).
 * This extracts bits 21 through 12, which represent the minor version.
 *
 * @param version The 32-bit version integer.
 * @return The minor version.
 */
#define MENTAL_XV_VERSION_MINOR(version) (((uint32_t)(version) >> 12U) & 0x3FFU)

/**
 * @brief This macro extracts the patch version of the API.
 *
 * @details It applies a bitwise AND with 0xFFFU (which corresponds to 12 bits)
 * to the 32-bit integer version. This extracts bits 11 through 0,
 * which represent the patch version.
 *
 * @param version The 32-bit version integer.
 * @return The patch version.
 */
#define MENTAL_XV_VERSION_PATCH(version) ((uint32_t)(version) & 0xFFFU)

/**
 * @brief Type definition for a 32-bit unsigned integer used to represent flags.
 *
 * This typedef creates an alias named `MentalFlags` for the `uint32_t` type,
 * which is a 32-bit unsigned integer. This alias is intended to be used for
 * storing and manipulating bit flags within the application. Using a typedef
 * improves code readability and maintainability by providing a semantic name
 * for the type.
 *
 * @details The `MentalFlags` type can be used to store multiple boolean flags
 * within a single 32-bit integer. Each bit in the integer can represent a
 * different flag, allowing for efficient storage and manipulation of multiple
 * flags.
 *
 * Example usage:
 * @code
 * MentalFlags flags = 0;
 *
 * void setFlag(MentalFlags *flags, uint32_t flag) {
 *     *flags |= flag;
 * }
 *
 * void clearFlag(MentalFlags *flags, uint32_t flag) {
 *     *flags &= ~flag;
 * }
 *
 * int main() {
 *     setFlag(&flags, 0x00000001); // Set the first bit
 *     clearFlag(&flags, 0x00000001); // Clear the first bit
 *     return 0;
 * }
 * @endcode
 */
typedef uint32_t MentalFlags;

/**
 * @brief Enumeration representing the possible results of an operation.
 *
 * This enum defines a set of named integer constants that represent the
 * various outcomes of an operation or function. These constants make the
 * code more readable and maintainable by replacing raw integer values with
 * meaningful names.
 *
 * @details The possible values are:
 * - MT_SUCCESS: The operation completed successfully.
 * - MT_NOT_READY: The operation is not ready to be performed or is not yet complete.
 * - MT_EVENT_SET: An event has been set (e.g., a flag or signal).
 * - MT_EVENT_RESET: An event has been reset (e.g., a flag or signal).
 * - MT_INCOMPLETE: The operation is incomplete or only partially completed.
 * - MT_ERROR: An error occurred during the operation.
 */
typedef enum MentalResult
{
    MT_SUCCESS     = 0,     /**< Operation completed successfully. */
    MT_NOT_READY   = 1,     /**< Operation is not ready or not yet complete. */
    MT_EVENT_SET   = 3,     /**< Event has been set. */
    MT_EVENT_RESET = 4,     /**< Event has been reset. */
    MT_INCOMPLETE  = 5,     /**< Operation is incomplete or partially completed. */
    MT_ERROR       = 6      /**< An error occurred during the operation. */
} MentalResult;

/**
 * @brief Enumeration representing the possible structure types.
 *
 * This enum defines a set of named integer constants that represent the
 * various structure types used in the application. These constants make the
 * code more readable and maintainable by replacing raw integer values with
 * meaningful names.
 *
 * @details The possible values are:
 * - MT_STRUCTURE_TYPE_APPLICATION_INFO: The structure for application info.
 * - MT_STRUCTURE_TYPE_ENGINE_INFO: The structure for engine info.
 */
typedef enum MentalStructureType {
    MT_STRUCTURE_TYPE_APPLICATION_INFO  = 0, /**< Structure for application info. */
    MT_STRUCTURE_TYPE_ENGINE_INFO       = 1, /**< Structure for engine info. */
} MentalStructureType;

/**
 * @brief Type definition for flags used during instance creation.
 *
 * This typedef creates an alias named `MentalInstanceCreateFlags` for the `MentalFlags` type,
 * which is used to store and manipulate bit flags during the creation of an instance.
 */
typedef MentalFlags MentalInstanceCreateFlags;

/**
 * @brief Structure containing application information.
 *
 * This structure holds various pieces of information about the application,
 * such as its name, version, engine name, and engine version.
 */
typedef struct MentalApplicationInfo {
    MentalStructureType    sType;              /**< Type of the structure. */
    const void*            pNext;              /**< Pointer to the next structure in a chain. */
    const char*            pApplicationName;   /**< Name of the application. */
    uint32_t               applicationVersion; /**< Version of the application. */
    const char*            pEngineName;        /**< Name of the engine. */
    uint32_t               engineVersion;      /**< Version of the engine. */
    uint32_t               apiVersion;         /**< Version of the API. */
} MentalApplicationInfo;

/**
 * @brief Structure containing information for creating an instance.
 *
 * This structure holds various pieces of information required to create an instance,
 * such as application info, enabled layers, and enabled extensions.
 */
typedef struct MentalInstanceCreateInfo {
    MentalStructureType             sType;                     /**< Type of the structure. */
    const void*                     pNext;                     /**< Pointer to the next structure in a chain. */
    MentalInstanceCreateFlags       flags;                     /**< Flags for instance creation. */
    const MentalApplicationInfo*    pApplicationInfo;          /**< Pointer to application info. */
    uint32_t                        enabledLayerCount;         /**< Number of enabled layers. */
    const char* const*              ppEnabledLayerNames;       /**< Array of enabled layer names. */
    uint32_t                        enabledExtensionCount;     /**< Number of enabled extensions. */
    const char* const*              ppEnabledExtensionNames;   /**< Array of enabled extension names. */
} MentalInstanceCreateInfo;

// TODO: implement it.
typedef struct MentalInstance {
    MentalApplicationInfo appInfo;
    MentalInstanceCreateInfo instanceInfo;
} MentalInstance;

// TODO: implement it.
MentalInstance* mentalCreateInstance(const MentalInstanceCreateInfo* instance_info);

/*
typedef struct _mental_platform_id *        mental_platform_id;
typedef struct _mental_device_id *          mental_device_id;
typedef struct _mental_context *            mental_context;
typedef mental_bitfield              mental_device_type;

*/
/**
 * @brief Retrieves the list of available MentalXV platforms.
 *
 * This function queries the number of available MentalXV platforms and returns
 * their identifiers.
 *
 * @param num_entries The number of mt_platform_id entries that can be added to
 *                    platforms. If platforms is not NULL, the number of
 *                    mt_platform_id entries returned in the platforms array
 *                    will be the minimum of the value specified by num_entries
 *                    and the number of platforms available.
 * @param platforms Returns a list of platform identifiers. The mt_platform_id
 *                  values returned in platforms can be used to identify each
 *                  available platform. If platforms is NULL, it is ignored.
 * @param num_platforms Returns the number of platforms available. If
 *                       num_platforms is NULL, it is ignored.
 *
 * @return MENTAL_SUCCESS if the function executed successfully. Otherwise, it
 *         returns an error code indicating the type of error encountered.
 */

/*
extern MENTAL_API_ENTRY uint32_t MENTAL_API_CALL
mentalGetPlatfromIDs(
    uint32_t                num_entries,
    mental_platform_id*     platforms,
    uint32_t                num_platforms
); // MT_API_SUFFIX__VERSION_1_0;

extern MENTAL_API_ENTRY uint32_t MENTAL_API_CALL
mentalGetDeviceIDs(
    mental_platform_id      platform,
    mental_device_type      device_type,
    uint32_t                num_entries,
    mental_device_id *      device_id
)
*/



#ifdef __cplusplus
    }
#endif

#endif // MENTAL_XV_CORE_H_
